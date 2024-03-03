#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "FortSyncedAnimMetaData.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortSyncedAnimMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SyncedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SyncedMontageFemaleOverride;
    
    UFortSyncedAnimMetaData();
};

