#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AsyncTaskResult.h"
#include "EVolumeState.h"
#include "LevelSaveBaseComponent.generated.h"

class AActor;
class AFortVolume;
class ULevelSaveRecord;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULevelSaveBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExplicitSaveFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoLoadRecord: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSaveRecord* LevelRecord;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorToAddAfterWrite;
    
public:
    ULevelSaveBaseComponent();
    UFUNCTION(BlueprintCallable)
    void StopPeriodicSaveTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartPeriodicSaveTimer();
    
    UFUNCTION(BlueprintCallable)
    void SaveOutLevelRecord();
    
private:
    UFUNCTION(BlueprintCallable)
    bool ResaveLevelStreamedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool ResaveActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterNewActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterModificationToRollback(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool RegisteredDeletedLevelStreamedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDeletionToRollback(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterDeletedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCreationToRollback(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishSpawning(const FAsyncTaskResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedRecordWrite(const FAsyncTaskResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedRecordRead(const FAsyncTaskResult& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadLevelRecord();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume);
    
private:
    UFUNCTION(BlueprintCallable)
    void ConstructNewLevelRecord(AActor* Owner);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplySaveToWorld(const bool bComplexShouldSpawn);
    
};

