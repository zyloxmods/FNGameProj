#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AsyncTaskResult.h"
#include "CreativeThumbnailGenerator.generated.h"

class AActor;
class UCameraComponent;
class ULevelSaveRecord;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class UCreativeThumbnailGenerator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath StageActorClassSoftClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveRecord* LevelSaveRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
public:
    UCreativeThumbnailGenerator();
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelSaveRecordFinishSpawning(const FAsyncTaskResult& AsyncTaskResult);
    
};

