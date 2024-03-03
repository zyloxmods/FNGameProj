#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortActiveFriendsViolator.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActiveFriendsViolator : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActivePlayerCount;
    
public:
    UFortActiveFriendsViolator();
};

