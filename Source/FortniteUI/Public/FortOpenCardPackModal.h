#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "RequestOpenCardPackDelegateDelegate.h"
#include "FortOpenCardPackModal.generated.h"

class UCommonButton;
class UCommonListView;

UCLASS(Blueprintable, EditInlineNew)
class UFortOpenCardPackModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* CardPackList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* OpenAllButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* CancelButton;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestOpenCardPackDelegate BPOnRequestOpenCardPack;
    
public:
    UFortOpenCardPackModal();
};

