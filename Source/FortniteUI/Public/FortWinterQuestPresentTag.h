#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "FortWinterQuestPresentTag.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestPresentTag : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CharacterName;
    
public:
    UFortWinterQuestPresentTag();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupCharacterNameTag(const FLinearColor& CharacterName);
    
};

