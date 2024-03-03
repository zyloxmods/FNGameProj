#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AsyncTaskCallbackDelegateDelegate.h"
#include "AsyncTaskResult.h"
#include "Templates/SubclassOf.h"
#include "LevelRecordSpawner.generated.h"

class AActor;
class AFortVolume;
class UAsyncTaskQueue;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class FORTNITEGAME_API ULevelRecordSpawner : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedSpawning;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortVolume* VolumeCurrentlySpawningWithin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTaskQueue* TaskQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedAsyncLoadingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedSpawningFromRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedPostUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorClassesThatWereAlreadyLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
public:
    ULevelRecordSpawner();
private:
    UFUNCTION(BlueprintCallable)
    void NotifyFinishedSpawning(const FAsyncTaskResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void FailsafeTimerExpired();
    
};

