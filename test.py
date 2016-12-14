from ROOT import Tako,TChain

# Test write-out using Tako
k=Tako()
k.Open()
for i in xrange(3): k.Fill()
k.Close()

# Test read
ch=TChain("tree","")
ch.AddFile("out.root")
print
print ch.GetEntries(),"entries found"
print
for i in xrange(ch.GetEntries()):
    print "Reading-in Entry",i
    ch.GetEntry(i)

    print "Looping over vec1"
    vec1 = ch.vec1
    for j in xrange(vec1.size()):
        print "vec1",vec1[j],"@ index",j

    print "Looping over vec2"
    vec2 = ch.vec2
    for j in xrange(vec2.size()):
        print "vec2",vec2[j],"@ index",j

    print

    
