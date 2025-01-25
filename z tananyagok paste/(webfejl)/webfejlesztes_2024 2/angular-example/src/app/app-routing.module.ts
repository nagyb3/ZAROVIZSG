import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import {BindingsDirectivesComponent} from './bindings-directives/bindings-directives.component';
import {UserManagementComponent} from './user-management/user-management.component';

const routes: Routes = [
  {path: 'bindings-directives', component: BindingsDirectivesComponent},
  {path: 'users', component: UserManagementComponent},
  {path: '', redirectTo: 'bindings-directives', pathMatch: 'full'}
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
