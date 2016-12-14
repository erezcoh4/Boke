import sys
from ROOT import gSystem
gSystem.Load("libKazuAna_Boke")
from ROOT import sample

try:

    print "PyROOT recognized your class %s" % str(sample)

except NameError:

    print "Failed importing Boke..."

sys.exit(0)

