# DEPRECATED
QDictopia is deprecated. No more development will be taking place. This project is restored for its historical value.

Thanks for all your support!

QDictopia
=
QDictopia is an edition of sdcv/stardict on Qtopia Open Source 4.3.1. It uses sdcv's lib for word lookup and Qt for GUI.

Build & install
=
```
# QTOPIABUILDDIR/bin/qtopiamake
# make & make install
```

Dictionary files
=
Dictionary files used by QDictopia are from StarDict. By default, it locates in "/usr/share/stardict/dic/". For one dictionary, it includes four types of file: *.dict.dz, *.idx, *.oft, and *.ifo. You could put your own dictionary file in this directory or modify DIC_PATH in the souce code.

Fonts
=
QDictopia uses Wen Quan Yi font.. You could find it in "http://wqy.sourceforge.net/cgi-bin/enindex.cgi". And I use "wqy-unibit" font because Qtopia is unicode based. Put the font file "wqy-unibit.bdf" in the tarball to "$QPEDIR/lib/fonts/". Append a line in the file "$QPEDIR/lib/fonts/fontdir" with following:
```
wenquanyi wqy-unibit.bdf FT n 75 160 s
```
Then in the file "$QPEDIR/etc/default/Trolltech/qpe.conf", modify:
```
[Font]
FontFamily[]=wenquanyi
FontSize[]=6.4
```
Restart Qtopia, then you will see a different font is used.
	
Developed By
=
Luxi Liu - <luxi.liu@gmail.com>
