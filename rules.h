static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 * xprop | grep -i class
	 */
	/* class            									              instance    title       				         tags mask     border width          isfloating   monitor */
	{ "Gnome-terminal", 									              NULL,       NULL,       				         1,            borderpx,             0,           0 },

	{ "Code",           									              NULL,       NULL,       				         1 << 1,       borderpx,             0,            1 },
	{ "Sublime_text",   									              NULL,       NULL,       				         1 << 1,       borderpx,             0,           -1 },
	{ "Atom", 		    									                NULL,       NULL,       				         1 << 1,       borderpx,             0,           -1 },
	{ "QtCreator", 											                NULL,       NULL,       				         1 << 1,       borderpx,             0,            0 },
	{ "jetbrains-clion", 									              NULL,       NULL,       				         1 << 1,       borderpx,             0,            0 },

	{ "Firefox",        									              NULL,       NULL,       				         1 << 2,       borderpx,             0,           -1 },
	{ "luakit",         									              NULL,       NULL,       				         1 << 2,       borderpx,             0,           -1 },
	{ "Google-chrome",  									              NULL,       NULL,       				         1 << 2,       borderpx,             0,           0 },
	{ "Chromium-browser",  									            NULL,       NULL,       				         1 << 2,       borderpx,             0,           0 },
	{ "Yandex-browser-beta", 								            NULL,       NULL,       				         1 << 2,       borderpx,             0,           -1 },

	{ "pcmanfm-qt",     									              NULL,       NULL,       				         1 << 3,       borderpx,             0,           0 },
	{ "Pcmanfm",        									              NULL,       NULL,       				         1 << 3,       borderpx,             0,           0 },
	{ "Nautilus",       									              NULL,       NULL,       				         1 << 3,       borderpx,             0,           0 },
	{ "Nemo",           									              NULL,       NULL,       				         1 << 3,       borderpx,             0,           0 },
	{ "Skype",           									              NULL,       NULL,       				         1 << 3,       borderpx,             0,           0 },
	{ "Electron",   										                NULL,       NULL,       				         1 << 3,       borderpx,             0,           0 },
	{ "zoom",   											                  NULL,       NULL,       				         1 << 3,       borderpx,             0,           0 },
	{ "FML early loading progress", 			              NULL,       NULL,       				         1 << 3,       borderpx,             0,           0 },
	{ "org-tlauncher-tlauncher-rmo-TLauncher",  			  NULL,       NULL,       				         1 << 3,       borderpx,             0,           0 },
	{ "net-minecraftforge-installer-SimpleInstaller",   NULL,       NULL,       				         1 << 3,       borderpx,             0,           0 },

	{ "Audacious",      									              NULL,       NULL,       				         1 << 4,       borderpx,             0,           0 },
	{ "TelegramDesktop",									              NULL,       NULL,       				         1 << 4,       borderpx,             0,           0 },
	{ "Pavucontrol",											              NULL,       NULL,       				         1 << 4,       borderpx,             0,           0 },

	{ "Gimp",           									              NULL,       NULL,       				         1 << 5,       borderpx,             0,           -1 },
	{ "Photoshop.exe",  									              NULL,       NULL,       				         1 << 5,       borderpx,             0,           -1 },
	{ "Inkscape",       									              NULL,       NULL,       				         1 << 5,       borderpx,             0,           -1 },
  { "Sqlectron",           							              NULL,       NULL,       				         1 << 5,       borderpx,             0,           0 },
	{ "NoSQLBooster for MongoDB",   			              NULL,       NULL,       				         1 << 5,       borderpx,             0,           0 },
	{ "Postman",           								              NULL,       NULL,       				         1 << 5,       borderpx,             0,           0 },
	{ "Insomnia",           							              NULL,       NULL,       				         1 << 5,       borderpx,             0,           0 },

	{ "Mainwindow.py",  									              NULL,       NULL,       				         1 << 6,       borderpx,             0,           -1 },
	{ "Steam",  											                  NULL,       NULL,       				         1 << 6,       borderpx,             0,           -1 },
	{ "steam_app_109600",  								              NULL,       NULL,       				         1 << 6,       0,             	 	   0,           -1 },
	{ "neverwinter.exe",  								              NULL,       NULL,       				         1 << 6,       0,             	 	   0,           -1 },
	{ "warfork.x86_64",  									              NULL,       NULL,       				         1 << 6,       0,             	 	   0,           -1 },
	{ "csgo_linux64",  										              NULL,       NULL,       				         1 << 6,       0,             	 	   0,           -1 },
	{ "steam_proton",  										              NULL,       NULL,       				         1 << 6,       0,             	 	   0,           -1 },

	{ "VirtualBox",     									              NULL,       NULL,       				         1 << 7,       borderpx,             0,           0 },
	{ "discord",         									              NULL,       NULL,       				         1 << 7,       borderpx,             0,           0 },

	{ "qBittorrent",    									              NULL,       NULL,       				         1 << 8,       borderpx,             0,           -1 },

	{ "Wine",    											                  NULL,       NULL,       				         NULL, 	       borderpx,             1,           0 },
	{ "Zenity",    											                NULL,       NULL,       				         NULL, 	       borderpx,             1,           0 },
	{ "Gnome-calendar",    								              NULL,       NULL,       				         NULL, 	       borderpx,             1,           -1 },
	{ "Gnome-calculator",    							              NULL,       NULL,       				         NULL, 	       borderpx,             1,           -1 },
	{ "File-roller",	    								              NULL,       NULL,       				         NULL, 	       borderpx,             1,           0 },
	{ "Minecraft 1.7.10",	    						              NULL,       NULL,       				         NULL, 	       borderpx,             1,           0 },
	{ "org-tlauncher-tlauncher-rmo-TLauncher",  			  NULL,       NULL,       				         NULL, 	       borderpx,             1,           0 },
	{ "dotnet",  											                  NULL,       "OpenSAGE Big Editor",       NULL, 	       borderpx,             1,           0 },
};