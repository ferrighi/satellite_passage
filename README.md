## satellite_passage
This module uses a OL5 map to diplay Sentinel-1 and Sentinel-2 future acquisition plans as retrived from ESA: 

- https://sentinel.esa.int/web/sentinel/missions/sentinel-1/observation-scenario/acquisition-segments
- https://sentinel.esa.int/web/sentinel/missions/sentinel-2/acquisition-plans

The KML files are filtered to provide detailed information about the planned Sentinel acquisitions within the 
Norwegian area of interst. Each KML file usually covers a period of 10-15 days. To select the time period slide 
the Start and End buttons below the map.

To know more about the satellite acquisition (i.e. ID, Mode, Observation Time, ect...) click on the passage stripe. When passing with the mouse on the passage stripe:

- Passages of Sentinel-2A and Sentinel-2B are highlighted in red.
- Passages of Sentinel-1A and Sentinel-1B are highlighted in blue for EW mode (sea) and green for IW mode (land).

Filtering for specific satellites can be achieved using the layer switcher icon on the top right corner.

# dependecies
This modules depend on libraries, OL5 and ol-switcher, and requires kml files to be available under the files/kml folder.
