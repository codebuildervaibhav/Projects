import 'package:flutter/material.dart';


class Question extends StatelessWidget {
  final String questionText;
  //final String answerQuestion;

  Question(this.questionText  );

  @override
  Widget build(BuildContext context) {
    return Container(
      width: double.infinity,
      margin: EdgeInsets.all(5),
      child: Text(
        questionText,
        style: TextStyle(fontSize: 25),
        textAlign: TextAlign.center,
      ),
    );
  }
}
