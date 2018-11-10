---
title: How a Type System Improves your JavaScript Code
date: 2018-10-27T22:40:32.169Z
path: how-types-improve-javascript
---

Vanilla JavaScript is untyped by nature, some will call it “smart” because it is able to figure out what is a number or a string.

This makes it easier to run JavaScript code, it simply needs to be executed in a browser or Node.js runtime. However, its vulnerable to numerous runtime errors that can spoil your user experience.

If you’ve ever experienced the following, you would benefit from adopting a type system.

- After fetching a list of data you may find that a certain field doesn’t exist on one of the records, causing the app to crash unless explicitly handled.
- An instance of a class you imported doesn’t have a method you’re trying to invoke.
- Your IDE doesn’t know what methods and properties are available, so it cannot easily assist you with autocomplete.
- Difficulty reasoning about code, type systems at a glance make it easier to refactor

## Flow, TypeScript, or ReasonML

If you have an existing codebase that you wish to make bulletproof, with respect to type errors, you could try adopting Flow or TypeScript. They have a fairly similar syntax.
