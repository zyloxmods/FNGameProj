#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPlaysetOffsetType.h"
#include "FortAccountItemDefinition.h"
#include "FortCreativeTagsBearer.h"
#include "FortCreativeTagsHelper.h"
#include "FortPlaysetStreamingData.h"
#include "LevelSaveRecordProvider.h"
#include "FortPlaysetItemDefinition.generated.h"

class AActor;
class AFortMinigame;
class UFortPlaysetItemDefinition;
class UFortPlaysetPropItemDefinition;
class UFortWorldItemDefinition;
class ULevelSaveRecord;
class ULevelSaveRecordCollection;
class ULevelStreamingDynamic;
class UObject;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class UFortPlaysetItemDefinition : public UFortAccountItemDefinition, public ILevelSaveRecordProvider, public IFortCreativeTagsBearer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> PlaysetToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWorldItemDefinition> SpawnItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionFullSavePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZSnapTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaysetOffsetType OffsetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DefaultRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UIDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortMinigame> MinigameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAdjustForWorldCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePlaysetProps: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCreativeTagsHelper CreativeTagsHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveRecord* LevelSaveRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveRecordCollection* PlaysetPropLevelSaveRecordCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, int32> ActorClassCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortPlaysetPropItemDefinition>> AssociatedPlaysetProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaysetName;
    
public:
    UFortPlaysetItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* SpawnPlaysetFromStruct(AActor* WorldContextObject, const FFortPlaysetStreamingData& LevelData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* SpawnPlayset(AActor* WorldContextObject, UFortPlaysetItemDefinition* Playset, FVector Location, FRotator Rotation, FFortPlaysetStreamingData& OutLevelData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnActorsInPlayset(AActor* WorldContextObject, UFortPlaysetItemDefinition* Playset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlaysetName() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector AdjustToFinalLocation(UObject* WorldContextObject, UFortPlaysetItemDefinition* Playset, FVector BaseLocation, FRotator Rotation);
    
    
    // Fix for true pure virtual functions not being implemented
};

