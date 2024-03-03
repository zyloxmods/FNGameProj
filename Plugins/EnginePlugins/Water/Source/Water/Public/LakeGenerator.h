#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "LakeGenerator.generated.h"

class UBoxComponent;
class ULakeCollisionComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ULakeGenerator : public UWaterBodyGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LakeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LakeCollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    ULakeCollisionComponent* LakeCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> LakeMesh;
    
public:
    ULakeGenerator();
};

