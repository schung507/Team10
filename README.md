[![Build Status](https://travis-ci.org/UCLA-CS130/Team10.svg?branch=master)](https://travis-ci.org/UCLA-CS130/Team10)


## Usage

```bash
$ ./webserver <config file>
```

## Example

```bash
$ make
$ ./webserver ./demo/example_conf 
```

Open a browser and go to "localhost:\<port\>"
Request will be echoed in the webpage.

## Testing

```bash
$ sudo apt-get install python-pip
$ sudo pip install psutil
$ python test.py
```

Verify the request and response are valid.

### Code skeleton
http://www.boost.org/doc/libs/1_57_0/doc/html/boost_asio/examples/cpp03_examples.html

### Makefile
http://stackoverflow.com/questions/33282703/running-http-server-example-from-boost-asio
