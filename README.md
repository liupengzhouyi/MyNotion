# MyNotion

```mermaid
flowchart LR
	subgraph Item
		I1[itemType]
		I2[name]
		I3[info]
		I4[id]
		I5[auther]
		I6[version]
		I7[date_time]
	end
	subgraph Data
		D1[data]
		D11[data]
		D2[nextData]
    		D3[previousData]
    		D4[nextHistorydata]
    		D5[previousHistoryData]
		D1 --> D2
		D3 --> D1
		D11 --> D4
		D5 --> D11

	end
	Item --> Data
```

```mermaid
classDiagram
  	direction TB
  		class Time {
    			-hour : int
			-minute : int
			-second : int
  		}
		class Date {
    			-year : int
			-month : int
			-day : int
  		}
		class DateTime {
    			-date : Date
			-time : Time
  		}
		class Item {
    			-itemType : ItemType
    			-name : std::string
    			-info : std::string
    			-id : std::string
    			-auther : std::string
    			-version : std::string
    			-date_time : std::string
  		}
		class ItemType {
			-type : int
		}
		class Data {
			-data : ItemType
			-nextData : ItemType
			-previousData : ItemType
			-nextHistorydata : ItemType
			-previousHistoryData : ItemType
		}
		Data --o Item
		Item --o DateTime
		Item --o ItemType
		DateTime --o Date
		DateTime --o Time
```

## Table


```mermaid
classDiagram
  	direction TB
  		class Table {
    			-hour : int
			-minute : int
			-second : int
  		}
		class TableItem {
    			-year : int
			-month : int
			-day : int
  		}
		class TableData {
    			-date : Date
			-time : Time
  		}

		Table --o TableItem
		TableItem --o TableData

```
