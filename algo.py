
# Database Creation

# In[82]:


dataset=[] # This blank list will be used for the Dataset creation


# In[83]:



attribute=[] # This blank list will be used for saving the attributes entered by the user
count=0 # It will be used as counter in the loop
e=int(input("Enter the number of records: ")) # The user needs to enter the total numbers of record present in the data
n=int(input("Enter the number of attributes you want to enter:")) #The  user needs to enter the total numbers of attributes present in the data

#The user will enter the atrribute names one after another and the names will be appended in the list attribute
for i in range(n):
        a=input("Enter your attribute's name: ")
        attribute.append(a)
#This while loop will be executed till the count will be less than the number of records
while count<e:
    data = {} #Blanck dictionary for saving each record
    #This for loop will be iterated till the last item of the list will be executed
    for i in range(len(attribute)):
        print("Type Yes For the neumeric attribute")
        print(f"Your attribute is {attribute[i]}")
        attribute_type=input("Type Yes for neumeric attribute and No for others")
        #It will check whether the entered attribute type is neumerical or not
        #If neumerical then it will be converted to integer while entered
        if attribute_type =="Yes":
            xi = int(input(f"Enter data of the attribute {attribute[i]}:"))
            data[attribute[i]] = xi
            print(data)
        else:
            xi = input(f"Enter data of the attribute {attribute[i]}:")
            data[attribute[i]] = xi
            print(data)
    dataset.append(data)
    print(dataset)
    count=count+1


# In[84]:


#Entered Data
dataset


# # Filtering Algorithm

# In[85]:


#Filter function will receive dataset filter_key and value as the parameters
#After that it will extract the data from the dictionary based on the data supplied as the filter_key and the value
def filter(dataset,filter_key,value):
    for i in range(len(dataset)):
        if dataset[i][filter_key]==value:
              print(dataset[i])


# In[86]:


filter(dataset,"Name","A")


# # Aggregate Algorithm

# In[73]:


l=[]


# In[76]:


def aggregate(dataset,attribute):
    for i in range(len(dataset)):
        value= dataset[i][attribute]
        l.append(value)
    s=sum(l)
    aggregate=s/len(l)
    print(aggregate)


# In[90]:


aggregate(dataset,"Score")


# # Sorting Algorithm

# In[79]:


def sorting (dataset,attribute):
    def get_name(d):
        return d[attribute]
    
    new_data = sorted(dataset, key=get_name)
    print( new_data)


# In[91]:


sorting(dataset,"Name")

