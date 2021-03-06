// Fill out your copyright notice in the Description page of Project Settings.

#include "TheMayhem.h"
#include "GoldenPointer.h"

/////////////////////////////CUSTOM CODE//////////////////////////////////
AGoldenPointer::AGoldenPointer()
{
	const ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("StaticMesh'/Game/Geometry/pointer.pointer'")); // load a mesh from a file
	pickupMesh->SetStaticMesh(MeshObj.Object);

	pickupMesh->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));

	pickupType = EpickupType::USABLE;
}

///////////////////////////////////////////////////////////////////////
