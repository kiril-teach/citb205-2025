# Assignment: Banking System with Client Management

## Objective

Create a command-line banking system in C++ that demonstrates object-oriented programming principles, including inheritance, polymorphism, and object relationships. The system must manage clients and their accounts, supporting multiple accounts per client.

---

## Requirements

### 1. **Client Class**
- Stores:
  - Unique client ID (4-digit number)
  - First name and last name
  - Valid Bulgarian phone number (`+359...`)
- Each client can own multiple accounts.
- *Files*: `Client.h`, `Client.cpp`

### 2. **Account Classes (Polymorphism)**
- **StandardAccount**: 1% transaction fee on all transactions, plus $0.50 fee on withdrawals.
- **PremiumAccount**: No transaction or withdrawal fees.
- **All Accounts**:
  - Reference their owner by client ID (do **not** store name/phone in the account).
  - Unique 4-character alphanumeric account number.
  - Minimum $100 opening balance.
- *Files*: `Account.h`, `Account.cpp`, `StandardAccount.h`, `StandardAccount.cpp`, `PremiumAccount.h`, `PremiumAccount.cpp`

### 3. **Operations**
```
[1] Register Client
[2] Open Account
[3] List Client Accounts
[4] Deposit
[5] Withdraw
[6] Transfer
[7] Show Account
[8] Exit
```

### 4. **Functionality**
- **Register Client**: Add a new client before opening accounts.
- **Open Account**: Create an account for an existing client.
- **List Client Accounts**: Show all accounts for a given client.
- **Show Account**: Display account details, including owner info.
- **Deposit/Withdraw/Transfer**: Standard banking operations with correct fee handling and validation.

---

## Example Interaction

### Register Client
```
Choose option: 1
Client ID (4 digits): 1001
First name: Anna
Last name: Petrova
Phone: +359887123654
Client registered!
```

### Open Account
```
Choose option: 2
Client ID: 1001
Account number: X9Y8
Type (standard/premium): premium
Account created! Balance: $100.00
```

### List Client Accounts
```
Choose option: 3
Client ID: 1001
Anna Petrova's accounts:
X9Y8 (Premium) - $100.00
A1B2 (Standard) - $450.50
```

### Deposit
```
Choose option: 4
Enter account number: A1B2
Enter amount to deposit: 200
Deposit successful. New balance: 300.00
```

---

### Withdraw
```
Choose option: 5
Enter account number: A1B2
Enter amount to withdraw: 50
Withdrawal successful. Fee: 0.50. New balance: 249.50
```

---

### Transfer
```
Choose option: 6
Enter source account number: A1B2
Enter destination account number: Z9X8
Enter amount to transfer: 100
Transfer successful. Fee: 1.00. New balance: 148.50
```

### Show Account
```
Choose option: 7
Account number: X9Y8
Owner: Anna Petrova (ID: 1001)
Type: Premium
Balance: $600.00
Last transactions: [...]
```

---
