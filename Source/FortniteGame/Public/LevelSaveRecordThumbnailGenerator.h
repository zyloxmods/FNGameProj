#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelSaveRecordThumbnailGenerator.generated.h"

class AActor;
class UCameraComponent;
class ULevelRecordSpawner;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class ULevelSaveRecordThumbnailGenerator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> StageActorClassSoftClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelRecordSpawner* ActiveRecordSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
public:
    ULevelSaveRecordThumbnailGenerator();
};

