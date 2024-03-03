#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "FortAnimSetRandomAnimation.h"
#include "FortAnimSet.generated.h"

class UAnimSequenceBase;
class UAnimationAsset;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath SourceRootPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectoryPath> TargetRootPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* FallbackSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UniqueInSourceAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UniqueInTargetAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAnimSetRandomAnimation> RandomAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAnimationAsset*> AssetRemapping;
    
    UFortAnimSet();
    UFUNCTION(BlueprintCallable)
    void UpdateReferencesInRandomSection();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAssets();
    
};

