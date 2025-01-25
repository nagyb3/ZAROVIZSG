import { Component } from '@angular/core';

@Component({
  selector: 'app-bindings-directives',
  standalone: false,

  templateUrl: './bindings-directives.component.html',
  styleUrl: './bindings-directives.component.css'
})
export class BindingsDirectivesComponent {

  title: string = 'Adatkötés és Direktívák bemutatása';

  userInput: string = '';

  isVisible: boolean = true;
  items: string[] = ['Alma', 'Banán', 'Cseresznye'];

  selectedFruit: string = 'alma';

  isHighlighted: boolean = false;
  fontSize: number = 16;

  toggleHighlight(){
    this.isHighlighted = !this.isHighlighted;
  }

}
