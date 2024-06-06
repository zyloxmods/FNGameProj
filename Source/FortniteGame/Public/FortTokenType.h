#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "EItemProfileType.h"
#include "FortAccountItemDefinition.h"
#include "FortTokenType.generated.h"

class AFortItemPreviewActor;
class AFortScriptedAction;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTokenType : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortScriptedAction> ScriptedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor NodeTintColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPercentageRepresentation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemProfileType ProfileType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortItemPreviewActor> ItemPreviewActorClass;
    
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Token", GetFName());
    }
    UFortTokenType(const FObjectInitializer& ObjectInitializer);
};

