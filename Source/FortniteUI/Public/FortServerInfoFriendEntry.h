#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortServerInfoFriendEntry.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortServerInfoFriendEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FriendName;
    
public:
    UFortServerInfoFriendEntry();
};

