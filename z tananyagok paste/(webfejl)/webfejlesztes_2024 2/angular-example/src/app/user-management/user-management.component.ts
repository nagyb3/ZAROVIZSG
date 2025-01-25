import { Component } from '@angular/core';
import {User} from './user.model';

@Component({
  selector: 'app-user-management',
  standalone: false,

  templateUrl: './user-management.component.html',
  styleUrl: './user-management.component.css'
})
export class UserManagementComponent {

  users: User[] = [
    { id: 1, name: 'Kovács Péter', email: 'peter@mail.com', age: 25},
    { id: 2, name: 'Kovács János', email: 'janos@mail.com', age: 20},
    { id: 3, name: 'Kovács Tamás', email: 'tamas@mail.com', age: 30}
  ];

  newUser: User = {id: 0, name: '', email:'', age:0};
  editingUser: User | null = null;

  addUser(){
    if (this.newUser.name && this.newUser.email && this.newUser.age){
      this.newUser.id = this.users.length + 1;
      this.users.push({ ...this.newUser})
      this.newUser = {id: 0, name: '', email:'', age:0};
    }
  }

  editUser(user: User){
    this.editingUser = {...user};
  }

  updateUser(){
    if (this.editingUser){
      const index = this.users.findIndex(u => u.id === this.editingUser!.id);
      if(index !== -1){
        this.users[index] = {...this.editingUser};
      }
      this.editingUser = null;
    }
  }

  deleteUser(id: number){
    this.users = this.users.filter(user => user.id !== id);
  }

}
