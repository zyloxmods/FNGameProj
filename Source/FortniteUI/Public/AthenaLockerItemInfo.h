#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EAthenaLockerInfoRestrictionWarning.h"
#include "AthenaLockerItemInfo.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaLockerItemInfo : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Description;
    
public:
    UAthenaLockerItemInfo();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateAccessRestrictionWarning(bool bShouldShow, const FText& WarningText, EAthenaLockerInfoRestrictionWarning WarningType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoItemSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDefinitionSet(const UFortItemDefinition* ItemDefinition);
    
};

