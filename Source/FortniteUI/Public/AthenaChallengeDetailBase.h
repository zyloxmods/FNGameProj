#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaChallengeDetailBase.generated.h"

class UFortItemBaseWidget;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeDetailBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemBaseWidget* ItemInfo_PreviewedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SB_MainContent;
    
public:
    UAthenaChallengeDetailBase();
};

