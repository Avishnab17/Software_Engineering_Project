Algorithm BreadthFirstSearch(residualGraph, source, sink, parent Tracker):

    queue[]:array of integers
    visited[]:array of integers
    N:integer

START

 For x varying from 0 to N  //filling visited array with zero 
    visited<-0
 End for

head=tail<-0
enqueue(source)
visited[source] <- True
parent Tracker[source] <- -1

  While (head != tail) do //while

   u <- dequeue(source)  //source=0

    For v varying from 0 to N do

      If (visited[v] = False AND residualGraph[u][v] > 0) then

	    If(v=sink) then
            parentTracker[v] <- u
	        return true
        End if

        enqueue(v)
        visited[v] <- True
        parent Tracker[v] <- u

      End if
    End for
  End while
  
  If (visited[sink]=1) then
     return True
  If not
     return False
  End if

 END

