# Generate IEEE SRS PDF using reportlab (Platypus)

from reportlab.platypus import SimpleDocTemplate, Paragraph, Spacer
from reportlab.lib.styles import ParagraphStyle, getSampleStyleSheet
from reportlab.lib import colors
from reportlab.lib.units import inch
from reportlab.lib.pagesizes import A4

# File path
file_path = "Ambulance_Booking_and_Tracking_System_SRS.pdf"
doc = SimpleDocTemplate(file_path, pagesize=A4)
elements = []

styles = getSampleStyleSheet()

normal_style = styles["Normal"]
heading_style = styles["Heading1"]

content = """
SOFTWARE REQUIREMENTS SPECIFICATION
Ambulance Booking and Tracking System

1. Introduction

1.1 Purpose
The purpose of this document is to describe the functional and non-functional requirements of the Ambulance Booking and Tracking System. The system allows users to book ambulances during emergencies and track them in real time.

1.2 Scope
The system provides an online platform where users can request ambulances, drivers can manage trip requests, and administrators can monitor operations. The objective is to reduce response time and improve coordination.

2. Overall Description

2.1 Product Perspective
The system follows a client-server architecture consisting of User Application, Driver Application, Admin Panel, Backend Server, and Database.

2.2 User Classes
User (Patient/Relative)
Driver
Administrator

3. Functional Requirements

FR-1: User Registration and Login
Description: Allows users to create accounts and log in securely.
Inputs: Name, Phone, Email, Password, OTP
Processing: Validate details, verify OTP, encrypt password, store data
Outputs: Registration confirmation or error message

FR-2: Ambulance Booking
Description: Allows users to request an ambulance.
Inputs: Pickup location, Ambulance type, Emergency details
Processing: Identify available ambulances, generate booking ID
Outputs: Booking confirmation and driver notification

FR-3: Automatic Ambulance Assignment
Description: Assigns nearest available ambulance automatically.
Inputs: User GPS, Ambulance location data
Processing: Calculate distance and select nearest ambulance
Outputs: Assigned ambulance details

FR-4: Real-Time Tracking
Description: Provides live tracking of ambulance.
Inputs: Driver GPS updates
Processing: Update map location and calculate ETA
Outputs: Live tracking display and arrival notification

FR-5: Driver Trip Management
Description: Enables driver to manage trip lifecycle.
Inputs: Booking request, Trip start/end confirmation
Processing: Update trip status and store trip data
Outputs: Trip confirmation and status updates

FR-6: Admin Monitoring and Control
Description: Allows admin to manage system operations.
Inputs: Ambulance and driver details
Processing: Add/update/delete records, monitor bookings
Outputs: Updated dashboard and reports

4. Non-Functional Requirements

Performance: Response time shall not exceed 2 seconds.
Security: Data shall be encrypted and securely stored.
Reliability: System shall be available 24/7.
Usability: Interface shall be simple and user-friendly.

5. Future Enhancements
Online payment integration
Hospital system integration
AI-based route optimization
"""

for line in content.split("\n"):
    elements.append(Paragraph(line, normal_style))
    elements.append(Spacer(1, 0.2 * inch))

doc.build(elements)

file_path
