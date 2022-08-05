import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

//void main() => runApp(MyApp());

class MyApp extends StatefulWidget {
  @override
  State<StatefulWidget> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
   @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('flutter aap'),
      ),
      body: Column(
        children: <Widget>[
          Card(
             child: Text('chart'),
           ),
           Card(
             child: Text('list of txn'),
          ),
        ],
      ),
    );
  }
}
