#pragma once
#include "CoreMinimal.h"
#include "CommonRotator.h"
#include "Engine/DataTable.h"
#include "Components/SlateWrapperTypes.h"
#include "AthenaChallengePageRotator.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengePageRotator : public UCommonRotator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrimaryNextInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrimaryPreviousInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SecondaryNextInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SecondaryPreviousInput;
    
public:
    UAthenaChallengePageRotator();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputBindingVisiblity(ESlateVisibility InVisibility);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNumPagesSet(int32 NumPages);
    
};

