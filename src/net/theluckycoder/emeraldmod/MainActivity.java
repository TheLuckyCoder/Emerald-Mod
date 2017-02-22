package net.theluckycoder.emeraldmod;

import android.Manifest;
import android.app.Activity;
import android.os.Bundle;
import android.os.Build;
import android.content.Intent;
import android.net.Uri;
import android.view.View;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Toast;
import android.content.pm.PackageManager;

import com.razvanmcrafter.addon.emeraldmod.R;

public class MainActivity extends Activity {
	
	@Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
		
		if (Build.VERSION.SDK_INT >= 23)
			checkForPermission();
    }

	public void downloadLauncher(View view) {
		startActivity(new Intent(Intent.ACTION_VIEW, Uri.parse("https://play.google.com/store/apps/details?id=net.zhuoweizhang.mcpelauncher")));
	}

	@Override  
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }
	
    @Override  
    public boolean onOptionsItemSelected(MenuItem item) {  
        switch (item.getItemId()) {  
			case R.id.rate:
                startActivity(new Intent(Intent.ACTION_VIEW, Uri.parse("https://play.google.com/store/apps/details?id=com.razvanmcrafter.addon.emeraldmod")));
				return true;
			case R.id.community:
				startActivity(new Intent(Intent.ACTION_VIEW, Uri.parse("https://plus.google.com/communities/104130537090639033736")));
				return true;
			case R.id.twitter:
				startActivity(new Intent(Intent.ACTION_VIEW, Uri.parse("https://twitter.com/theluckycoder")));
				return true;
			default:  
                return super.onOptionsItemSelected(item);  
        }
    }

    private void checkForPermission() {
        int hasWriteContactsPermission = checkSelfPermission("net.zhuoweizhang.mcpelauncher.ADDON");
        if (hasWriteContactsPermission != PackageManager.PERMISSION_GRANTED) {
            requestPermissions(new String[] {"net.zhuoweizhang.mcpelauncher.ADDON"}, 123);
            return;
        }
    }
}

