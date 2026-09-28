// Include the input/output stream library.
// This library allows us to use cout for displaying output.
#include <iostream>

// Include the string library.
// This library allows us to use string for storing text.
#include <string>

// Use the standard namespace.
// This allows us to write cout and string instead of std::cout and std::string.
using namespace std;


// Create the base class named Media.
// This class represents a general media item.
class Media
{
protected:

    // Declare a string variable named title.
    // This stores the title of the media item.
    string title;


public:

    // Create a constructor for the Media class.
    // It receives the title of the media item.
    Media(string t)
    {
        // Store the received title in the title variable.
        title = t;
    }


    // Declare a pure virtual function named play().
    // Every derived media class must provide its own play() function.
    virtual void play() = 0;


    // Declare a pure virtual function named pause().
    // Every derived media class must provide its own pause() function.
    virtual void pause() = 0;


    // Declare a pure virtual function named stop().
    // Every derived media class must provide its own stop() function.
    virtual void stop() = 0;


    // Declare a pure virtual function named showDetails().
    // Every derived media class must provide its own implementation.
    virtual void showDetails() = 0;


    // Declare a virtual destructor.
    // This allows derived-class destructors to work correctly.
    virtual ~Media()
    {
        // Display a message when the Media destructor is called.
        cout << "Media destructor called." << endl;
    }
};


// Create the Audio class.
// Audio inherits from the Media class.
class Audio : public Media
{
public:

    // Create the Audio constructor.
    // It receives the title of the audio.
    Audio(string t) : Media(t)
    {
        // The Media constructor initializes the title.
    }


    // Override the play() function.
    // This provides the audio-specific play operation.
    void play() override
    {
        // Display a message showing that the audio is playing.
        cout << "Playing Audio: " << title << endl;
    }


    // Override the pause() function.
    // This provides the audio-specific pause operation.
    void pause() override
    {
        // Display a message showing that the audio is paused.
        cout << "Pausing Audio: " << title << endl;
    }


    // Override the stop() function.
    // This provides the audio-specific stop operation.
    void stop() override
    {
        // Display a message showing that the audio is stopped.
        cout << "Stopping Audio: " << title << endl;
    }


    // Override the showDetails() function.
    // This displays information about the audio.
    void showDetails() override
    {
        // Display the type and title of the audio.
        cout << "Media Type: Audio" << endl;
        cout << "Title: " << title << endl;
    }
};


// Create the Video class.
// Video inherits from the Media class.
class Video : public Media
{
public:

    // Create the Video constructor.
    // It receives the title of the video.
    Video(string t) : Media(t)
    {
        // The Media constructor initializes the title.
    }


    // Override the play() function.
    // This provides the video-specific play operation.
    void play() override
    {
        // Display a message showing that the video is playing.
        cout << "Playing Video: " << title << endl;
    }


    // Override the pause() function.
    // This provides the video-specific pause operation.
    void pause() override
    {
        // Display a message showing that the video is paused.
        cout << "Pausing Video: " << title << endl;
    }


    // Override the stop() function.
    // This provides the video-specific stop operation.
    void stop() override
    {
        // Display a message showing that the video is stopped.
        cout << "Stopping Video: " << title << endl;
    }


    // Override the showDetails() function.
    // This displays information about the video.
    void showDetails() override
    {
        // Display the type and title of the video.
        cout << "Media Type: Video" << endl;
        cout << "Title: " << title << endl;
    }
};


// Create the Image class.
// Image inherits from the Media class.
class Image : public Media
{
public:

    // Create the Image constructor.
    // It receives the title of the image.
    Image(string t) : Media(t)
    {
        // The Media constructor initializes the title.
    }


    // Override the play() function.
    // This provides the image-specific play operation.
    void play() override
    {
        // Display a message showing that the image is displayed.
        cout << "Displaying Image: " << title << endl;
    }


    // Override the pause() function.
    // This provides the image-specific pause operation.
    void pause() override
    {
        // Display a message showing that the image is paused.
        cout << "Pausing Image: " << title << endl;
    }


    // Override the stop() function.
    // This provides the image-specific stop operation.
    void stop() override
    {
        // Display a message showing that the image is stopped.
        cout << "Stopping Image: " << title << endl;
    }


    // Override the showDetails() function.
    // This displays information about the image.
    void showDetails() override
    {
        // Display the type and title of the image.
        cout << "Media Type: Image" << endl;
        cout << "Title: " << title << endl;
    }
};


// The main() function is the starting point of the C++ program.
int main()
{
    // Create an Audio object named audio.
    // The title of the audio is "My Song".
    Audio audio("My Song");


    // Create a Video object named video.
    // The title of the video is "My Video".
    Video video("My Video");


    // Create an Image object named image.
    // The title of the image is "My Photo".
    Image image("My Photo");


    // Create a base-class Media pointer.
    // This pointer can point to any derived media object.
    Media* media;


    // Point the Media pointer to the Audio object.
    media = &audio;


    // Display a heading for the Audio object.
    cout << "----- Audio -----" << endl;


    // Call the showDetails() function through the Media pointer.
    // Runtime polymorphism calls the Audio version.
    media->showDetails();


    // Call the play() function through the Media pointer.
    // Runtime polymorphism calls the Audio version.
    media->play();


    // Call the pause() function through the Media pointer.
    // Runtime polymorphism calls the Audio version.
    media->pause();


    // Call the stop() function through the Media pointer.
    // Runtime polymorphism calls the Audio version.
    media->stop();


    // Point the Media pointer to the Video object.
    media = &video;


    // Display a heading for the Video object.
    cout << "\n----- Video -----" << endl;


    // Call the showDetails() function through the Media pointer.
    // Runtime polymorphism calls the Video version.
    media->showDetails();


    // Call the play() function through the Media pointer.
    media->play();


    // Call the pause() function through the Media pointer.
    media->pause();


    // Call the stop() function through the Media pointer.
    media->stop();


    // Point the Media pointer to the Image object.
    media = &image;


    // Display a heading for the Image object.
    cout << "\n----- Image -----" << endl;


    // Call the showDetails() function through the Media pointer.
    // Runtime polymorphism calls the Image version.
    media->showDetails();


    // Call the play() function through the Media pointer.
    media->play();


    // Call the pause() function through the Media pointer.
    media->pause();


    // Call the stop() function through the Media pointer.
    media->stop();


    // Set the pointer to nullptr.
    // nullptr means that the pointer is not pointing to an object.
    media = nullptr;


    // Return 0 to indicate successful completion of the program.
    return 0;
}