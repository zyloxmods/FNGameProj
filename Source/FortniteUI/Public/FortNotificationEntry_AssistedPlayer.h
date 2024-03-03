#pragma once
#include "CoreMinimal.h"
#include "FortNotificationEntry.h"
#include "FortNotificationEntry_AssistedPlayer.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNotificationEntry_AssistedPlayer : public UFortNotificationEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
public:
    UFortNotificationEntry_AssistedPlayer();
};

