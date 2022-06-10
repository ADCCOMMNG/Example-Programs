Simulated PID Loop:  this task is used to load and simulate a PID loop for automation verification testing with the PID Tuning tool.

Step 0: connect to a Px-CPU and load this project onto a Px-CPU.
Step 1: open the PID Tuning tool from the Tools menu.
Step 2: select the PID Simulated Loop from the drop down selector.
Step 3: click on the New PID Tune Tab button to the right of the selector.

Step 4: open the Data View and enable the Start Process bit.
Step 5: check that PI is selected in the Auto Tune Settings of the PID Tuning panel.
Step 6: click the 'Start' button in the PID Tuning panel.
Step 7: observe and ensure that the Auto Tune process is 'Running' and goes to 'Complete'.
Step 8: observe and validate that PID Proportional and Integral tags are updated when the Auto Tune Setting is 'Complete'.
Step 9:  let the test run and complete which will be when the Test Complete bit is set. 

Step 10: change your selection from PI to PID in the Auto Tune Settings of the PID Tuning panel, and then enable Start Process again in the Data View.
Step 11: observe and validate that PID Proportional, Integral, and Derivative tags are updated when the Auto Tune is 'Complete'.
Step 12:  let the test run and complete which will be when the Test Complete bit is set again.

You have now succefully tested the PID Tuning for PI loops and PID loops.
