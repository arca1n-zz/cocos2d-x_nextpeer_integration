package com.qubitgames.runfromz;

import android.app.Application;
import android.app.NativeActivity;
import android.os.Bundle;

import com.nextpeer.android.Nextpeer;
import com.nextpeer.android.NextpeerListener;
import com.nextpeer.android.NextpeerTournamentCustomMessage;
import com.nextpeer.android.NextpeerTournamentEndData;
import com.nextpeer.android.NextpeerTournamentStartData;

public class NextpeerNativeBridgeActivity extends NativeActivity{
	
	
	 
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
		Nextpeer.initialize(this, "fb3a16b6bb5d6650d32cc809aa2d0e79", _nextpeerListener);
		Nextpeer.launch();
	}

	@Override
	protected void onDestroy() {	
		// TODO Auto-generated method stub
		super.onDestroy();
	}
	
	private NextpeerListener _nextpeerListener = new NextpeerListener() 
    {
        

        public void onTournamentStart(NextpeerTournamentStartData startData) {
            // Start the game scene
        }

        public void onTournamentEnd(NextpeerTournamentEndData endData) {
            // End the game scene, switch to main menu
        }
    };

	
}
