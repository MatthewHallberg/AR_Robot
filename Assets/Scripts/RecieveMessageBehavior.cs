using UnityEngine;
using System;
using System.Net.Sockets;
using System.Net;
using System.Collections;

public class RecieveMessageBehavior : MonoBehaviour {

	public ARPlaneController planeController;
	private bool messageRecieved = false;
	private string currPacket = "";

	private void Update () {
		if (messageRecieved) {
			messageRecieved = false;
			planeController.MessageRecieved (currPacket);
		}
	}

	void Start () {
		// Create UDP client
		int receiverPort = 1998;
		UdpClient receiver = new UdpClient (receiverPort);
		receiver.BeginReceive (DataReceived, receiver);
	}

	// This is called whenever data is received
	private void DataReceived (IAsyncResult ar) {

		UdpClient c = (UdpClient)ar.AsyncState;
		IPEndPoint receivedIpEndPoint = new IPEndPoint (IPAddress.Any, 0);
		Byte [] receivedBytes = c.EndReceive (ar, ref receivedIpEndPoint);

		//string packet = System.Text.Encoding.UTF8.GetString (receivedBytes, 0, 20);
		currPacket = System.Text.Encoding.UTF8.GetString (receivedBytes);
		//flip bool so we can alert other thread
		messageRecieved = true;

		// Restart listening for udp data packages
		c.BeginReceive (DataReceived, ar.AsyncState);
	}
}
