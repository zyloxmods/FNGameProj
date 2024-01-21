// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/* Taken from https://github.com/SizzyFNBR/FortniteEditor */
#include "FortActorFactory.h"
#include "FortniteGame/Public/FortStaticMeshActor.h"
#include "AssetData.h"
#include "Engine/StaticMesh.h"
#include "ActorFactories/ActorFactoryStaticMesh.h"
#include "ActorFactories/ActorFactory.h"

UFortActorFactory::UFortActorFactory()
{
	UE_LOG(LogTemp, Warning, TEXT("Init FortActorFactory"));
}

