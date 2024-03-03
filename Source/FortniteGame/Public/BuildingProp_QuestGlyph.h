#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BuildingProp_Quest.h"
#include "BuildingProp_QuestGlyph.generated.h"

class AFortPlayerController;
class UFortMontageItemDefinitionBase;
class UFortQuestItemDefinition;

UCLASS(Blueprintable)
class ABuildingProp_QuestGlyph : public ABuildingProp_Quest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InteractSubTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InteractSubTextColorUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowContextInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContextInfoUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortMontageItemDefinitionBase*> GlyphActivationEmotes;
    
    ABuildingProp_QuestGlyph();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggeringEmote(AFortPlayerController* FortPC, const UFortMontageItemDefinitionBase* EmoteAsset, const FGameplayTagContainer& FilteredQuestMetaDataTags);
    
};

