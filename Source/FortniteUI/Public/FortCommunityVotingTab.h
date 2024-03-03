#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "FortCommunityVotingTab.generated.h"

class UFortEventDateTimeTextBlock;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingTab : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonUserWidget> ContainedWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_LargeTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEventDateTimeTextBlock* DateTimeTextBlock_Countdown;
    
public:
    UFortCommunityVotingTab();
};

