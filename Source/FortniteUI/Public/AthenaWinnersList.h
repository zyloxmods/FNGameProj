#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaWinnerInfo.h"
#include "AthenaWinnersList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaWinnersList : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDisplayMultiWinners;
    
    UAthenaWinnersList();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWinnersAnnounced(const FAthenaWinnerInfo& WinnerInfo);
    
};

