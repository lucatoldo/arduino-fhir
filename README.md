# arduino-fhir
ARDUINO FHIR library

Purpose of this library is to facilitate handling FHIR resources by IOT devices that are programmed using the Arduino https://www.arduino.cc/ software.

## CPP generation from XSD schema

Due to the availability of XSD from FHIR.org, and due to the need of automatically generating new versions of the Arduino library compliant with the new versions of FHIR, the code had to be generated (semi) automatically. Here the strategy adopted.

### xsd sources

The Code Generation Schemas from https://www.hl7.org/fhir/downloads.html has been downloaded and used as source for generating the code

### xsde code generation

The core of the code is generated automatically through the powerful https://www.codesynthesis.com/download/xsde/3.2/ open source XSDE software. 

Thanks to Boris Kolpackov for very rapid support  and sharing the source code that runs also on MacoS Catalina 10.15.4 
see https://codesynthesis.com/pipermail/xsde-users/2020-February/000872.html and https://codesynthesis.com/~boris/tmp/xsde/xsde-3.3.0.a12+dep.tar.bz2

Thanks to James Sutton form Dolphin Computing www.dolphin-com.co.uk for sharing a build of the alpha version that runs also on MacOS Catalina 10.15.4

