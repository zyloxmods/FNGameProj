#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "FortCharacterPartSyncedSequenceMetaData.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortCharacterPartSyncedSequenceMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SyncedSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UFortCharacterPartSyncedSequenceMetaData();
};

