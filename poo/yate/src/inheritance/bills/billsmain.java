package inheritance.bills;

import java.util.ArrayList;

public class billsmain {

	/*
	 * un scanner de billetes le envía a un programa una lista de pares
	 * ordenados (llave, valor) de las características que detectó del billete.
	 * una función de un programa en java toma dicha información y por medio de 
	 * de un conjunto de ifs revisa ciertas reglas basado en la información de
	 * la lista de pares ordenados para decidir si el billete es falso o no.
	 * 
	 * la información es diferente dependiendo del tipo de billete, como se puede ver 
	 * en las listas de Pair en el main, donde se muestra un par de ejemplos de la información 
	 * que llega de un billete de 5000 y uno de 2000.
	 * 
	 * de la misma forma el scanner extrae información particular para cada tipo 
	 * de denominación y emisión. 
	 * 
	 * Como se puede suponer, la rutina llena de IFs actualmente es muy larga y complicada, 
	 * dificultando el mantenimiento del programa. 
	 * 
	 * Cómo diseñaría e implementaría usted una solución a esta situación que
	 * está dificultando el mantenimiento del programa si tiene la posiblidad de 
	 * apoyarse en orientación a objetos y herencia. 
	 */
	
	private ArrayList<Bill> validadores;
	
	public void init() {
		validadores = new ArrayList<Bill>();
		validadores.add(new Bill1000());
		validadores.add(new Bill2000());
		validadores.add(new Bill5000());
	}
	
	public boolean validate(ArrayList<Pair> pValues, int pDenominacion) {
		boolean result = false;
				
		for (Bill validator : validadores) {
			if (validator.getDenominacion()==pDenominacion) {
				result = validator.validate(pValues);
				break;
			}
		}
		
		return result;
	}
	
	public static void main(String[] args) {
		ArrayList<Pair> cincomil = new ArrayList<Pair>();

		cincomil.add(new Pair("firma de gerente","AA7838BC563A"));
		cincomil.add(new Pair("firma presidente","77733ABCCC7AAA"));
		cincomil.add(new Pair("font_serie","10px"));
		cincomil.add(new Pair("font_billete","14pix"));
		cincomil.add(new Pair("serie","A"));
		cincomil.add(new Pair("marca de agua","unknown"));
		cincomil.add(new Pair("denominacion","5000"));
		cincomil.add(new Pair("material","algodon"));
		cincomil.add(new Pair("sello","no presente"));
		cincomil.add(new Pair("lectura","media"));
		
		billsmain prog = new billsmain();
		prog.init();
		
		System.out.println(prog.validate(cincomil, 2000));
	}

}
