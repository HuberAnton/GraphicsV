

// Shorthand and notes to keep them out of my code.
/*
* 
    vulcan objects are created ddirectly with "vkCreate" or "vkAllocateXXX" 
    smart pointers work with vulcan but might want to be explict due vulcan being so.


the general pattern that object creation function parameters in Vulkan follow is:
    Pointer to struct with creation info
    Pointer to custom allocator callbacks,
    Pointer to the variable that stores the handle to the new object

    Eg:  VkResult result = vkCreateInstance(&createInfo, nullptr, &instance);



    Note that current implementaiton or recreating swap chain needs
    to stop rendering for a frame. Can be recreated in flight to 
    oldSwapChain field in the VkSwapchainCreateInfoKHR then destroyed after the
    last frame has finished processing.


    // Note that there were some changes due to making the viewport and scissoring
    // dynamic. They are created in the draw function now. 
    // They were set to null in the create graphicsPipeline.
    // Without it the images stretch as you resize the window.






    Should change findqueue families to take in a vkqueueflagbits to allow for 
    seacrhing for specific queues Look here:
    https://vulkan-tutorial.com/en/Vertex_buffers/Staging_buffer


*/