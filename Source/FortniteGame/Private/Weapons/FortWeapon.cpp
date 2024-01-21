// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Weapons/FortWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Weapons/FortWeapon.h"

// Sets default values
AFortWeapon::AFortWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(L"DefaultSceneRoot");

	/* Creating the default weapon mesh */
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(L"WeaponMesh");
	//WeaponMesh->AttachTo(RootComponent);
}

// Called when the game starts or when spawned
void AFortWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFortWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

