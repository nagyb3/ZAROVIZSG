import { ComponentFixture, TestBed } from '@angular/core/testing';

import { BindingsDirectivesComponent } from './bindings-directives.component';

describe('BindingsDirectivesComponent', () => {
  let component: BindingsDirectivesComponent;
  let fixture: ComponentFixture<BindingsDirectivesComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      declarations: [BindingsDirectivesComponent]
    })
    .compileComponents();

    fixture = TestBed.createComponent(BindingsDirectivesComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
