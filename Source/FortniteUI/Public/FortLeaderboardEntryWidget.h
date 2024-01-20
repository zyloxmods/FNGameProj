#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortLeaderboardEntryWidget.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLeaderboardEntryWidget : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LeaderboardEntryObject;
    
public:
    UFortLeaderboardEntryWidget();
    
    // Fix for true pure virtual functions not being implemented
};

