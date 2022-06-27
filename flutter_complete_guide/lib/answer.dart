import 'package:flutter/material.dart';


class Answer extends StatelessWidget {
  final  VoidCallback selectHandler;
  var answerText;

  Answer(this.selectHandler, this.answerText);

  @override
  Widget build(BuildContext context) {
    return Container(
      width: double.infinity,
      margin: EdgeInsets.all(3),
      // ignore: deprecated_member_use
      child: RaisedButton(
        color: Colors.cyan[200],
        textColor: Colors.pink[200],
        child: Text(answerText),
        onPressed: selectHandler
      ),
    );
  }
}
