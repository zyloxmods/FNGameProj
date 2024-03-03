#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/AssetManagerSettings.h"
#include "ActorInstanceRecord.h"
#include "ActorTemplateRecord.h"
#include "AsyncTaskCallbackDelegateDelegate.h"
#include "DeleteActorRecord.h"
#include "LevelStreamedDeleteActorRecord.h"
#include "ObjectCostVersion.h"
#include "RecordBucketMap.h"
#include "LevelSaveRecord.generated.h"

class AActor;
class UAsyncTaskQueue;
class ULevelRecordSpawner;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class FORTNITEGAME_API ULevelSaveRecord : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SaveVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectCostVersion CreateVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HalfBoundsExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 LastRecordID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FActorTemplateRecord> TemplateRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FActorInstanceRecord> ActorInstanceRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FActorInstanceRecord> VolumeInfoActorRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLevelStreamedDeleteActorRecord> LevelStreamedActorsToDelete;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedWrite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedRead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedRecordCollapse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorInstanceRecord> InstanceRecords_LEGACY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeleteActorRecord> DeleteActorRecords_LEGACY;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate FinishSpawningDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnRemoveAllDeletedLevelStreamedActorsComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTaskQueue* TaskQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelRecordSpawner*> ActiveSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedRemoveInvalidDeleteRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedRemoveInvalidInstanceRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedRemoveDuplicateInstanceRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRecordBucketMap RecordBucketMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedSeparateModifiedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedDeletePendingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishedWriteToBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RecentlySpawnedActors;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetManagerRedirect> CreativeAssetPathRedirects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresGridPlacement;
    
public:
    ULevelSaveRecord();
private:
    UFUNCTION(BlueprintCallable)
    void RemoveInvalidInstanceRecordsHelper(const int32 StartRecordIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInvalidDeleteRecordsHelper(const int32 StartRecordIndex);
    
    UFUNCTION(BlueprintCallable)
    void FindAndRemoveDuplicateRecordsUsingBucketMap(const int32 StartRecordIndex);
    
    UFUNCTION(BlueprintCallable)
    void FailsafeTimerExpired();
    
};

